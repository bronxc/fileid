([xml](gc .\data.xml -raw)).Items.item | % {
   $magic = $_."#text".Split(',')
   $name = $_.name.Replace(' ', "").Replace("(","").Replace(")","").Replace("/","").Replace('.','')
   "unsigned char magic_" + $name + "[" + $magic.Count + "] = {" + $_.'#text' + "}"
}