# BasedURL
BasedURL is a terminal application that stock user URL entered and then open saved URL entered by user.

# Engine

This application include [Fstream](https://cplusplus.com/reference/fstream/fstream/) library that provide write and read from files.\
[Ofstream](https://cplusplus.com/reference/fstream/ofstream/) write the URL to the file and [Ifstream](https://cplusplus.com/reference/fstream/ifstream/) read from the file.\
The URL that is reading will be merged with the "start" function from [Win Terminal](https://apps.microsoft.com/store/detail/windows-terminal/9N0DX20HK701).\
This application also allow the user to view all the URL's that are saved to the config file.\
Users also can open the "config.cfg" file directly with the application and remove or edit URL's.

# Warning 

If you delete "config.cfg" file, all the URL's that were saved will be removed.
