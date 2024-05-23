#include<stdio.h>
#include"password.c"
#include <unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char *pass;
    pass = getpass("Enter the Password: ");
    printf("password: %s\n",pass);
    int strength = check_password(pass);
    printf("password Strength: %d", strength);    
}