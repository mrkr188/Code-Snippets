#include <iostream>
#include <string>
#include<fstream>
#include<dirent.h>

using namespace std;

void printFileNames(string s){
    DIR *dir;
    struct dirent *ent;
    
    dir = opendir(s);
    
    while ((ent = readdir (dir)) != NULL) {
        printf ("%s\n", ent->d_name);
    }
    
    closedir (dir);
}

int main()
{
    printFileNames("/home/ubuntu/workspace/");

}