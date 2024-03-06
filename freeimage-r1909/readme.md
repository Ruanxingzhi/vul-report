Vendor:             open source, https://freeimage.sourceforge.io/
Affected product:   FreeImage 3.19.0 [r1909]


### Vulnerability 1
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginTIFF.cpp, AssignPixel()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in TIFF format, the AssignPixel() function has heap overflow read and write vulnerabilities, which may lead to command execution.




Trace:
  case10422: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->AssignPixel
  case10458: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->AssignPixel


### Vulnerability 2
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: PluginTIFF.cpp, read_iptc_profile()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in TIFF format, the read_iptc_profile() function has a heap overflow read vulnerability, which may lead to a Denial of Service




Trace:
  case10480: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->ReadMetadata->tiff_read_iptc_profile->read_iptc_profile


### Vulnerability 3
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: PluginTIFF.cpp, FreeImage_CreateICCProfile()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in TIFF format, the FreeImage_CreateICCProfile() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case10612: [READ,heap-use-after-free]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->ReadThumbnail->Load->FreeImage_CreateICCProfile
  case10370: [READ,heap-use-after-free]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->FreeImage_CreateICCProfile


### Vulnerability 4
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: ImfMisc.cpp, Imf_2_2::copyIntoFrameBuffer

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in EXR format, the copyIntoFrameBuffer() function has a stack overflow write vulnerability, which may lead to command execution.




Trace:
  case757: [WRITE,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->Imf_2_2::InputFile::readPixels->Imf_2_2::ScanLineInputFile::readPixels->IlmThread_2_2::ThreadPool::addGlobalTask->IlmThread_2_2::ThreadPool::addTask->Imf_2_2::->Imf_2_2::copyIntoFrameBuffer


### Vulnerability 5
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: ImfMisc.cpp, Imf_2_2::Xdr::read

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in EXR format, the Imf_2_2::Xdr::read() function has a stack overflow write vulnerability, which may lead to command execution.




Trace:
  case202: [WRITE,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->Imf_2_2::InputFile::readPixels->Imf_2_2::ScanLineInputFile::readPixels->IlmThread_2_2::ThreadPool::addGlobalTask->IlmThread_2_2::ThreadPool::addTask->Imf_2_2::->Imf_2_2::copyIntoFrameBuffer->void Imf_2_2::Xdr::read<Imf_2_2::CharPtrIO, char const*>


### Vulnerability 6
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: ImfDwaCompressor.cpp, Imf_2_2::DwaCompressor::Classifier::Classifier

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in EXR format, the Imf_2_2::DwaCompressor::Classifier::Classifier() function has a stack overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case10451: [READ,stack-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->Imf_2_2::InputFile::readPixels->Imf_2_2::ScanLineInputFile::readPixels->IlmThread_2_2::ThreadPool::addGlobalTask->IlmThread_2_2::ThreadPool::addTask->Imf_2_2::->Imf_2_2::DwaCompressor::uncompress->Imf_2_2::DwaCompressor::uncompress->Imf_2_2::DwaCompressor::Classifier::Classifier->std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string


### Vulnerability 7
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: ImfPizCompressor.cpp, Imf_2_2::CharPtrIO::readChars

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in EXR format, the Imf_2_2::CharPtrIO::readChars() function has a heap overflow read vulnerability, which may lead to a Denial of Service




Trace:
  case10574: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->Imf_2_2::InputFile::readPixels->Imf_2_2::ScanLineInputFile::readPixels->IlmThread_2_2::ThreadPool::addGlobalTask->IlmThread_2_2::ThreadPool::addTask->Imf_2_2::->Imf_2_2::PizCompressor::uncompress->Imf_2_2::PizCompressor::uncompress->void Imf_2_2::Xdr::read<Imf_2_2::CharPtrIO, char const*>->Imf_2_2::CharPtrIO::readChars


### Vulnerability 8
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: PSDParser.cpp, psdParser::ReadImageData

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in PSD format, the psdParser::ReadImageData() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case11043: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->psdParser::Load->psdParser::ReadImageData


### Vulnerability 9
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: PluginJPEG.cpp, fill_input_buffer()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in JPEG format, the fill_input_buffer() function has a buffer over-read vulnerability, which may lead to a Denial of Service.




Trace:
  case1939: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->jpeg_read_exif_dir->FreeImage_LoadFromMemory->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->jpeg_read_exif_dir->FreeImage_LoadFromMemory->FreeImage_LoadFromHandle->Load->jpeg_read_header->jpeg_consume_input->consume_markers->read_markers->first_marker->fill_input_buffer
  case10261: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->jpeg_read_exif_dir->FreeImage_LoadFromMemory->FreeImage_LoadFromHandle->Load->jpeg_read_header->jpeg_consume_input->consume_markers->read_markers->first_marker->fill_input_buffer
  case10137: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->psdParser::Load->psd_read_exif_profile->jpeg_read_exif_dir->FreeImage_LoadFromMemory->FreeImage_LoadFromHandle->Load->jpeg_read_header->jpeg_consume_input->consume_markers->read_markers->first_marker->fill_input_buffer


### Vulnerability 10
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: Exif.cpp, processMakerNote

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in JPEG format, the processMakerNote() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case10979: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->jpeg_read_exif_dir->processMakerNote->MemcmpInterceptorCommon
  case10637: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->jpeg_read_exif_dir->processMakerNote->FreeImage_strnicmp


### Vulnerability 11
Vulnerability Type: null pointer dereference
Impact:             DoS
Affected component: Exif.cpp, jpeg_read_exif_profile_raw

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in JPEG format, the jpeg_read_exif_profile_raw() function has a null pointer dereference vulnerability, which may lead to a Denial of Service




Trace:
  case10007: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->jpeg_read_exif_profile_raw->MemcmpInterceptorCommon


### Vulnerability 12
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: Exif.cpp, jpeg_read_exif_profile()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in JPEG format, the jpeg_read_exif_profile() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case10871: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->MemcmpInterceptorCommon


### Vulnerability 13
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: FreeImageTag.cpp, FreeImage_SetTagValue()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in JPEG format, the FreeImage_SetTagValue() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case10549: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->read_markers->jpeg_read_exif_profile->jpeg_read_exif_dir->processExifTag->processCanonMakerNoteTag->FreeImage_SetTagValue


### Vulnerability 14
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: j2k.c, opj_j2k_copy_default_tcp_and_create_tcd()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in J2K format, the opj_j2k_copy_default_tcp_and_create_tcd() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case102: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->opj_read_header->opj_j2k_read_header->opj_j2k_exec->opj_j2k_copy_default_tcp_and_create_tcd


### Vulnerability 15
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: j2k.c, opj_j2k_tcp_destroy()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in J2K format, the opj_j2k_tcp_destroy() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case10298: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->opj_destroy_codec->opj_j2k_destroy->opj_j2k_tcp_destroy


### Vulnerability 16
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: j2k.c, opj_j2k_read_mct()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in J2K format, the opj_j2k_read_mct() function has a heap overflow read vulnerability, which may lead to a Denial of Service.




Trace:
  case11111: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->opj_read_header->opj_j2k_read_header->opj_j2k_exec->opj_j2k_read_header_procedure->opj_j2k_read_mct


### Vulnerability 17
Vulnerability Type: null pointer dereference
Impact:             DoS
Affected component: J2KHelper.cpp, J2KImageToFIBITMAP()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in J2K format, the J2KImageToFIBITMAP() function has a null pointer dereference vulnerability, which may lead to a Denial of Service.




Trace:
  case10240: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->J2KImageToFIBITMAP


### Vulnerability 18
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginHDR.cpp, rgbe_RGBEToFloat()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in HDR format, the rgbe_RGBEToFloat() function has a heap overflow read and write vulnerability, which may lead to a command execution.




Trace:
  case2845: [WRITE,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->rgbe_ReadPixels_RLE->rgbe_ReadPixels->rgbe_RGBEToFloat
  case10038: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->rgbe_ReadPixels_RLE->rgbe_ReadPixels->rgbe_RGBEToFloat
  case10130: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->rgbe_ReadPixels_RLE->rgbe_ReadPixels->rgbe_RGBEToFloat


### Vulnerability 19
Vulnerability Type: buffer overflow
Impact:             DoS
Affected component: BitmapAccess.cpp, FreeImage_Unload()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in HDR format, the FreeImage_Unload() function has a out-of-bound read vulnerability, which may lead to a Denial of Service.




Trace:
  case1795: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->FreeImage_Unload


### Vulnerability 20
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginRAS.cpp, Load()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in RAS format, the Load() function has a heap overflow read and write vulnerability, which may lead to a command execution.




Trace:
  case10035: [WRITE,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load
  case1001: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load
  case10081: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load
  case10002: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load


### Vulnerability 21
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginRAS.cpp, ReadData()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in RAS format, the ReadData() function has a heap overflow read and write vulnerability, which may lead to a command execution.




Trace:
  case10631: [WRITE,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->ReadData
  case10003: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->ReadData
  case10551: [READ,SEGV]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->ReadData


### Vulnerability 22
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginXPM.cpp, Load()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in XPM format, the Load() function has a stack overflow write vulnerability, which may lead to a command execution.




Trace:
  case10231: [WRITE,stack-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->sprintf


### Vulnerability 23
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginXBM.cpp, readLine()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in XPM format, the readLine() function has a stack overflow write vulnerability, which may lead to a command execution.




Trace:
  case10465: [WRITE,stack-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->readXBMFile->readLine


### Vulnerability 24
Vulnerability Type: buffer overflow
Impact:             command execution
Affected component: PluginTARGA.cpp, _assignPixel<>()

Description:        In FreeImage library version 3.19.0 [r1909], when reading images in TARGA format, the _assignPixel<>() function has a heap overflow read and write vulnerability, which may lead to a command execution.




Trace:
  case10024: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->void loadRLE<8>->void _assignPixel<8>
  case10412: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->void loadRLE<24>->void _assignPixel<24>
  case10470: [WRITE,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->void loadRLE<16>->void _assignPixel<16>
  case10421: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->void loadRLE<32>->void _assignPixel<32>
  case10955: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->void loadRLE<24>->void _assignPixel<24>
  case10800: [READ,heap-buffer-overflow]@main->FreeImage_Load->FreeImage_LoadFromHandle->Load->void loadRLE<16>->void _assignPixel<16>