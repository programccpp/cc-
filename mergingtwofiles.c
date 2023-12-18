#include <stdio.h>
int main()
{
    FILE *file1, *file2, *mergedFile;
    char ch;
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL)
    {
        perror("Error opening file1.txt");
        return 1;
    }
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL)
    {
        perror("Error opening file2.txt");
        fclose(file1);
        return 1;
    }
    mergedFile = fopen("merged_file.txt", "w");
    if (mergedFile == NULL)
    {
        perror("Error creating merged_file.txt");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, mergedFile);
    }
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, mergedFile);
    }
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);
    printf("Files merged successfully!\n");
    return 0;
}
