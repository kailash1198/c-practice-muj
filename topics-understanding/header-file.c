// #include <accctrl.h> // EXPLICIT_ACCESS (structure) as an alias which automatically selects the ANSI or Unicode version of this function based on the definition of the UNICODE preprocessor constant. ===EXPLICIT_ACCESS (structure) - defines access control information for a specified trustee====

// this header files is use for set the permission of files and resources in windows programming
// *** Access control list management(ACL) ***

#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
    // // Specify the file name
    // LPCWSTR fileName = L"C:\\example.txt";

    // // Get a handle to the file
    // HANDLE hFile = CreateFileW(fileName, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    // if (hFile == INVALID_HANDLE_VALUE)
    // {
    //     printf("Failed to open file.\n");
    //     return 1;
    // }

    // // Set up security attributes
    // PSECURITY_DESCRIPTOR pSD = NULL;
    // SECURITY_ATTRIBUTES sa;
    // sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    // sa.lpSecurityDescriptor = pSD;
    // sa.bInheritHandle = FALSE;

    // // Create a security descriptor
    // if (!InitializeSecurityDescriptor(&pSD, SECURITY_DESCRIPTOR_REVISION))
    // {
    //     printf("Failed to initialize security descriptor.\n");
    //     CloseHandle(hFile);
    //     return 1;
    // }

    // // Define the ACL for the file
    // EXPLICIT_ACCESS ea;
    // ZeroMemory(&ea, sizeof(EXPLICIT_ACCESS));
    // ea.grfAccessPermissions = GENERIC_READ | GENERIC_WRITE;
    // ea.grfAccessMode = SET_ACCESS;
    // ea.grfInheritance = NO_INHERITANCE;
    // ea.Trustee.TrusteeForm = TRUSTEE_IS_NAME;
    // ea.Trustee.TrusteeType = TRUSTEE_IS_USER;
    // ea.Trustee.ptstrName = L"Everyone";

    // // Create ACL
    // PACL pACL = NULL;
    // DWORD dwResult = SetEntriesInAclW(1, &ea, NULL, &pACL);
    // if (dwResult != ERROR_SUCCESS)
    // {
    //     printf("Failed to set entries in ACL.\n");
    //     LocalFree(pSD);
    //     CloseHandle(hFile);
    //     return 1;
    // }

    // // Set the security descriptor with the ACL
    // if (!SetSecurityDescriptorDacl(&pSD, TRUE, pACL, FALSE))
    // {
    //     printf("Failed to set security descriptor DACL.\n");
    //     LocalFree(pSD);
    //     CloseHandle(hFile);
    //     return 1;
    // }

    // // Set the security attributes
    // sa.lpSecurityDescriptor = pSD;

    // // Set the security attributes for the file
    // if (!SetFileSecurityW(fileName, DACL_SECURITY_INFORMATION, pSD))
    // {
    //     printf("Failed to set file security.\n");
    //     LocalFree(pSD);
    //     CloseHandle(hFile);
    //     return 1;
    // }

    // // Close the file handle
    // CloseHandle(hFile);

    // printf("File permissions set successfully.\n");

    // ========== time.h library function practice ==============
    //    clock(); measure program time in seconds when you divide CLOCK_PER_SECONDS;

    // clock_t startTime; //start time
    // clock_t endTime;

    // startTime = clock();
    // for (int i = 0; i <= 1000000; i++)
    // {
    //     printf("%d\t", i);
    // }
    // endTime = clock(); //end time
    // int totalTime = (endTime - startTime) / CLOCKS_PER_SEC; //calculate time
    // printf("Total time taken by Program = %d\n", totalTime);

    // time()

    // time_t currentTime;
    // currentTime = time(NULL);
    // printf("Current time = %lld\n", currentTime);

    // time_t currentTime;
    // struct tm *localTimePointer;
    // currentTime = time(NULL);
    // localTimePointer = localtime(&currentTime);
    // printf("Local time = %s\n", asctime(localTimePointer));

    // ctime()
    // time_t currentTime;
    // char *timeString;
    // currentTime = time(NULL);
    // timeString = ctime(&currentTime);
    // printf("Current time = %s\n", timeString);

    // strftime()
    time_t currentTime;
    char strTime[100];
    struct tm *timePointer;
    currentTime = time(NULL);

    timePointer = localtime(&currentTime);
    if(strftime(strTime, sizeof(strTime), "%y/%m/%d (%H: %M: %S)",timePointer)==0){
        printf("Failed to format the time\n");
        return 1;
    }

    printf("Formatted time = %s\n", strTime);
    return 0;
}