#include "FreeImage.h"
#include <cstdio>

int main(int argc, char* argv[]) {
    FREE_IMAGE_FORMAT file_type = FreeImage_GetFileType(argv[1]);
    printf("file_type: %d\n", file_type);

    FIBITMAP *img = FreeImage_Load(file_type, argv[1]);
    printf("load to %p\n", img);

    FreeImage_Unload(img);
    printf("unload %p\n\n", img);
    
    return 0;
}