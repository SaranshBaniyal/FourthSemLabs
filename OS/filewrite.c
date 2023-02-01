#include <stdio.h>
# include <string.h>
int main( )
{
 
    FILE *filePointer ;
    char dataToBeWritten[50]
        = "Hello World by SB";

    filePointer = fopen("test.txt", "w") ;

    if ( filePointer == NULL )
    {
        printf( "File failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
   
        if ( strlen ( dataToBeWritten ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }
         
        fclose(filePointer) ;
         
        printf("Data successfully written in file test.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}