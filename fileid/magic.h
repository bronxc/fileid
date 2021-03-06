// magic.h
// Generated on: 04/26/2016 18:33:24

#pragma once
#include <string>
#include "common.hpp"

unsigned char magic_dosexe[2] = {0x4D,0x5A};
unsigned char magic_elf[4] = {0x7F,0x45,0x4C,0x46};
unsigned char magic_dex[8] = {0x64,0x65,0x78,0x0A,0x30,0x33,0x35,0x00};
unsigned char magic_lib[8] = {0x21,0x3C,0x61,0x72,0x63,0x68,0x3E,0x0A};
unsigned char magic_obj[2] = {0x4C,0x01};
unsigned char magic_zip[2] = {0x50,0x4B};
unsigned char magic_rar[6] = {0x52,0x61,0x72,0x21,0x1A,0x07};
unsigned char magic_7z[6] = {0x37,0x7A,0xBC,0xAF,0x27,0x1C};
unsigned char magic_tarzlzw[2] = {0x1F,0x9D};
unsigned char magic_tarzlzh[2] = {0x1f,0xA0};
unsigned char magic_bz2[3] = {0x42,0x5A,0x68};
unsigned char magic_tar[5] = {0x75,0x73,0x74,0x61,0x72};
unsigned char magic_gz[2] = {0x1F,0x8B};
unsigned char magic_cab[4] = {0x4D,0x53,0x43,0x46};
unsigned char magic_lha[3] = {0x2D,0x6C,0x68};
unsigned char magic_vhd[8] = {0x63,0x6F,0x6E,0x65,0x63,0x74,0x69,0x78};
unsigned char magic_iso1[5] = {0x43,0x44,0x30,0x30,0x31};
unsigned char magic_iso2[5] = {0x43,0x44,0x30,0x30,0x31};
unsigned char magic_iso3[5] = {0x43,0x44,0x30,0x30,0x31};
unsigned char magic_vmdk[3] = {0x4B,0x44,0x4D};
unsigned char magic_pcap[4] = {0xD4,0xC3,0xB2,0xA1};
unsigned char magic_pcapn[4] = {0x4D,0x3C,0xB2,0xA1};
unsigned char magic_rpm[4] = {0xED,0xAB,0xEE,0xDB};
unsigned char magic_ico[4] = {0x00,0x00,0x01,0x00};
unsigned char magic_gif87[6] = {0x47,0x49,0x46,0x38,0x37,0x61};
unsigned char magic_gif89[6] = {0x47,0x49,0x46,0x38,0x39,0x61};
unsigned char magic_tiff_l[4] = {0x49,0x49,0x2A,0x00};
unsigned char magic_tiff_b[4] = {0x4D,0x4D,0x00,0x2A};
unsigned char magic_jpg[2] = {0xFF,0xD8};
unsigned char magic_png[8] = {0x89,0x50,0x4E,0x47,0x0D,0x0A,0x1A,0x0A};
unsigned char magic_bmp[2] = {0x42,0x4D};
unsigned char magic_flac[4] = {0x66,0x4C,0x61,0x43};
unsigned char magic_midi[4] = {0x4D,0x54,0x68,0x64};
unsigned char magic_cur[4] = {0x00,0x00,0x02,0x00};
unsigned char magic_bmpOS2a[2] = {0x42,0x41};
unsigned char magic_bmpOS2ci[2] = {0x43,0x49};
unsigned char magic_bmpOS2cp[2] = {0x43,0x50};
unsigned char magic_bmpOS2i[2] = {0x49,0x43};
unsigned char magic_bmpOS2p[2] = {0x50,0x54};
unsigned char magic_oless[4] = {0xD0,0xCF,0x11,0xE0};
unsigned char magic_ps[4] = {0x25,0x21,0x50,0x53};
unsigned char magic_pdf[4] = {0x25,0x50,0x44,0x46};
unsigned char magic_db[16] = {0x53,0x51,0x4C,0x69,0x74,0x65,0x20,0x66,0x6F,0x72,0x6D,0x61,0x74,0x20,0x33,0x00};
unsigned char magic_dwg[4] = {0x41,0x43,0x31,0x30};
unsigned char magic_lnk[20] = {0x4C,0x00,0x00,0x00,0x01,0x14,0x02,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46};
unsigned char magic_biff2[2] = {0x09,0x00};
unsigned char magic_biff3[2] = {0x09,0x02};
unsigned char magic_biff4[2] = {0x09,0x04};
unsigned char magic_ppt95[38] = {0x4D,0x69,0x63,0x72,0x6F,0x73,0x6F,0x66,0x74,0x20,0x28,0x52,0x29,0x20,0x50,0x6F,0x77,0x65,0x72,0x50,0x6F,0x69,0x6E,0x74,0x20,0x28,0x52,0x29,0x20,0x57,0x69,0x6E,0x64,0x6F,0x77,0x73,0x20,0x20};
unsigned char magic_ppt3[4] = {0xED,0xDE,0xAD,0x0B};
unsigned char magic_ppt3s[4] = {0x0B,0xAD,0xDE,0xED};
unsigned char magic_mdbsys[19] = {0x00,0x01,0x00,0x00,0x4A,0x65,0x74,0x20,0x53,0x79,0x73,0x74,0x65,0x6D,0x20,0x44,0x42,0x20,0x20};
unsigned char magic_mdbstd[19] = {0x00,0x01,0x00,0x00,0x53,0x74,0x61,0x6E,0x64,0x61,0x72,0x64,0x20,0x4A,0x65,0x74,0x20,0x44,0x42};
unsigned char magic_mdbtmp[19] = {0x00,0x01,0x00,0x00,0x54,0x65,0x6D,0x70,0x20,0x4A,0x65,0x74,0x20,0x44,0x42,0x20,0x20,0x20,0x20};
unsigned char magic_accdbsys[19] = {0x00,0x01,0x00,0x00,0x41,0x43,0x45,0x20,0x53,0x79,0x73,0x74,0x65,0x6D,0x20,0x44,0x42,0x20,0x20};
unsigned char magic_accdbstd[19] = {0x00,0x01,0x00,0x00,0x53,0x74,0x61,0x6E,0x64,0x61,0x72,0x64,0x20,0x41,0x43,0x45,0x20,0x44,0x42};
unsigned char magic_accdbtmp[19] = {0x00,0x01,0x00,0x00,0x54,0x65,0x6D,0x70,0x20,0x41,0x43,0x45,0x20,0x44,0x42,0x20,0x20,0x20,0x20};
unsigned char magic_one[16] = {0xE4,0x52,0x5C,0x7B,0x8C,0xD8,0xA7,0x4D,0xAE,0xB1,0x53,0x78,0xD0,0x29,0x96,0xD3};
unsigned char magic_onetoc[16] = {0xA1,0x2F,0xFF,0x43,0xD9,0xEF,0x76,0x4C,0x9E,0xE2,0x10,0xEA,0x57,0x22,0x76,0x5F};
unsigned char magic_pst[4] = {0x21,0x42,0x44,0x4E};
unsigned char magic_chm[4] = {0x49,0x54,0x53,0x46};
unsigned char magic_dmp32[8] = {0x50,0x41,0x47,0x45,0x44,0x55,0x4D,0x50};
unsigned char magic_dmp64[8] = {0x50,0x41,0x47,0x45,0x44,0x55,0x36,0x34};
unsigned char magic_hdmp[6] = {0x4D,0x44,0x4D,0x50,0x93,0xA7};
unsigned char magic_mp4[4] = {0x66,0x74,0x79,0x70};
unsigned char magic_asf[16] = {0x30,0x26,0xB2,0x75,0x8E,0x66,0xCF,0x11,0xA6,0xD9,0x00,0xAA,0x00,0x62,0xCE,0x6C};
unsigned char magic_riff[4] = {0x52,0x49,0x46,0x46};
unsigned char magic_mp3[2] = {0xFF,0xFB};
unsigned char magic_mp3id3v2[3] = {0x49,0x44,0x33};
unsigned char magic_flv[3] = {0x46,0x4C,0x56};
unsigned char magic_swf[3] = {0x46,0x57,0x53};
unsigned char magic_cwf[3] = {0x43,0x57,0x53};
unsigned char magic_sh[2] = {0x23,0x21};
unsigned char magic_xml[5] = {0x3C,0x3F,0x78,0x6D,0x6C};
unsigned char magic_xmluni[12] = {0xFF,0xFE,0x3C,0x00,0x3F,0x00,0x78,0x00,0x6D,0x00,0x6C,0x00};
unsigned char magic_html[5] = {0x3C,0x68,0x74,0x6D,0x6C};
unsigned char magic_htmluni[12] = {0xFF,0xFE,0x3C,0x00,0x68,0x00,0x74,0x00,0x6D,0x00,0x6C,0x00};
unsigned char magic_dtd[9] = {0x3C,0x21,0x44,0x4F,0x43,0x54,0x59,0x50,0x45};
unsigned char magic_rtf[6] = {0x7B,0x5C,0x72,0x74,0x66,0x31};
unsigned char magic_utf8[3] = {0xEF,0xBB,0xBF};
unsigned char magic_utf16[2] = {0xFE,0xFF};
unsigned char magic_utf32[4] = {0xFF,0xFE,0x00,0x00};

std::vector<common::MagicInfo> list = {
  {"exe", "DOS Executable", "", 0, 2, magic_dosexe, "ExeHelper"},
  {"elf", "ELF Executable", "", 0, 4, magic_elf, NULL},
  {"dex", "Dalvik Executable", "", 0, 8, magic_dex, NULL},
  {"lib", "Microsoft Program Library Common Object File Format", "", 0, 8, magic_lib, NULL},
  {"obj", "Microsoft Common Object File Format relocatable object code", "", 0, 2, magic_obj, NULL},
  {"zip", "Zip Archive", "", 0, 2, magic_zip, "ZipHelper"},
  {"rar", "Rar Archive", "", 0, 6, magic_rar, NULL},
  {"7z", "7z Archive", "", 0, 6, magic_7z, NULL},
  {"tar.z", "Tar.Zip Container", "LZW Compression", 0, 2, magic_tarzlzw, NULL},
  {"tar.z", "Tar.Zip Container", "LZH Compression", 0, 2, magic_tarzlzh, NULL},
  {"bz2", "BZip2 Container", "", 0, 3, magic_bz2, NULL},
  {"tar", "Tar Archive", "", 0, 5, magic_tar, NULL},
  {"gz", "GZIP Archive", "", 0, 2, magic_gz, NULL},
  {"cab", "Microsoft Cabinet file", "", 0, 4, magic_cab, NULL},
  {"lha", "LHA Archive", "", 0, 3, magic_lha, NULL},
  {"vhd", "Microsoft Virtual HardDisk", "", 0, 8, magic_vhd, NULL},
  {"iso", "ISO 9660 Disk Image", "", 8001, 5, magic_iso1, NULL},
  {"iso", "ISO 9660 Disk Image", "", 8801, 5, magic_iso2, NULL},
  {"iso", "ISO 9660 Disk Image", "", 9001, 5, magic_iso3, NULL},
  {"vmdk", "VMWare Virtual Disk", "", 0, 3, magic_vmdk, NULL},
  {"pcap", "Network Packet Capture File", "", 0, 4, magic_pcap, NULL},
  {"pcap", "Network Packet Capture File", "Nanosecond-precision timestamps", 0, 4, magic_pcapn, NULL},
  {"rpm", "Red Hat Package Manager File", "", 0, 4, magic_rpm, NULL},
  {"ico", "Icon File", "", 0, 4, magic_ico, NULL},
  {"gif", "GIF Image", "GIF87a", 0, 6, magic_gif87, NULL},
  {"gif", "GIF Image", "GIF89a", 0, 6, magic_gif89, NULL},
  {"tiff", "Tagged Image File", "little endian", 0, 4, magic_tiff_l, NULL},
  {"tiff", "Tagged Image File", "big endian", 0, 4, magic_tiff_b, NULL},
  {"jpg", "JPEG Image", "", 0, 2, magic_jpg, "JpegHelper"},
  {"png", "Portable Network Graphics", "", 0, 8, magic_png, NULL},
  {"bmp", "Bitmap Image", "", 0, 2, magic_bmp, NULL},
  {"flac", "Free Lossless Audio Codec", "", 0, 4, magic_flac, NULL},
  {"midi", "MIDI Sound File", "", 0, 4, magic_midi, NULL},
  {"cur", "Cursor", "", 0, 4, magic_cur, NULL},
  {"bmp", "Bitmap Image", "OS/2 Array", 0, 2, magic_bmpOS2a, NULL},
  {"bmp", "Bitmap Image", "OS/2 Color Icon", 0, 2, magic_bmpOS2ci, NULL},
  {"bmp", "Bitmap Image", "OS/2 Color Pointer", 0, 2, magic_bmpOS2cp, NULL},
  {"bmp", " Bitmap Icon", "OS/2 Icon", 0, 2, magic_bmpOS2i, NULL},
  {"bmp", "Bitmap Image", "OS/2 Pointer", 0, 2, magic_bmpOS2p, NULL},
  {"oless", "OLE Structured Storage", "", 0, 4, magic_oless, "OleHelper"},
  {"ps", "PostScript document", "", 0, 4, magic_ps, NULL},
  {"pdf", "PDF document", "", 0, 4, magic_pdf, NULL},
  {"db", "SQLLite Database File", "", 0, 16, magic_db, NULL},
  {"dwg", "Autocad Drawing", "", 0, 4, magic_dwg, "DwgHelper"},
  {"lnk", "LNK File", "", 0, 20, magic_lnk, NULL},
  {"xls", "Microsoft Excel", "BIFF2", 0, 2, magic_biff2, NULL},
  {"xls", "Microsoft Excel", "BIFF3", 0, 2, magic_biff3, NULL},
  {"xls", "Microsoft Excel", "BIFF4", 0, 2, magic_biff4, NULL},
  {"ppt", "Microsoft Powerpoint", "PPT95", 0, 38, magic_ppt95, NULL},
  {"ppt", "Microsoft Powerpoint", "PPT3", 0, 4, magic_ppt3, NULL},
  {"ppt", "Microsoft Powerpoint", "PPT3 Swap", 0, 4, magic_ppt3s, NULL},
  {"mdb", "Microsoft Access Database", "MDB_System", 0, 19, magic_mdbsys, NULL},
  {"mdb", "Microsoft Access Database", "MDB_Standard", 0, 19, magic_mdbstd, NULL},
  {"mdb", "Microsoft Access Database", "MDB_Temp", 0, 19, magic_mdbtmp, NULL},
  {"accdb", "Microsoft Access Database", "ACCDB_System", 0, 19, magic_accdbsys, NULL},
  {"accdb", "Microsoft Access Database", "ACCDB_Standard", 0, 19, magic_accdbstd, NULL},
  {"accdb", "Microsoft Access Database", "ACCDB_Temp", 0, 19, magic_accdbtmp, NULL},
  {"one", "Microsoft OneNote", "", 0, 16, magic_one, NULL},
  {"onetoc2", "Microsoft OneNote Table of Contents", "", 0, 16, magic_onetoc, NULL},
  {"pst", "Microsoft Outlook Personal Storage Table", "", 0, 4, magic_pst, NULL},
  {"chm", "Complied Help File", "", 0, 4, magic_chm, NULL},
  {"dmp", "Windows Dump File", "32-bit", 0, 8, magic_dmp32, NULL},
  {"dmp", "Windows Dump File", "64-bit", 0, 8, magic_dmp64, NULL},
  {"hdmp", "Windows Dump File", "with heap", 0, 6, magic_hdmp, NULL},
  {"mp4", "Mp4 Container", "", 4, 4, magic_mp4, "Mp4Helper"},
  {"asf", "ASF Container", "", 0, 16, magic_asf, "ASFHelper"},
  {"riff", "Riff file", "", 0, 4, magic_riff, "RIFFHelper"},
  {"mp3", "MPEG-1 Layer 3 file", "", 0, 2, magic_mp3, NULL},
  {"mp3", "MPEG-1 Layer 3 file", "ID3v2 Tag", 0, 3, magic_mp3id3v2, NULL},
  {"flv", "Flash Video", "", 0, 3, magic_flv, NULL},
  {"swf", "Shockwave Flash File", "", 0, 3, magic_swf, NULL},
  {"swf", "Shockwave Flash File", "compressed", 0, 3, magic_cwf, NULL},
  {"script", "*nix script", "", 0, 2, magic_sh, NULL},
  {"xml", "XML", "ASCII", 0, 5, magic_xml, NULL},
  {"xml", "XML", "Unicode", 0, 12, magic_xmluni, NULL},
  {"html", "HTML Document", "", 0, 5, magic_html, NULL},
  {"html", "HTML Document", "Unicode", 0, 12, magic_htmluni, NULL},
  {"html", "HTML Document", "DocType", 0, 9, magic_dtd, NULL},
  {"rtf", "Rich Text Format", "", 0, 6, magic_rtf, NULL},
  {"txt", "Text File", "UTF8", 0, 3, magic_utf8, NULL},
  {"txt", "Text File", "UTF16", 0, 2, magic_utf16, NULL},
  {"txt", "Text File", "UTF32", 0, 4, magic_utf32, NULL},
};
