#include <unistd.h>

void print(char c)
{
    write(1, &c, 1);
}

void rot(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'm'){
            print(str[i] + 13);
        }else if (str[i] >= 'n' && str[i] <= 'z'){
            print(str[i] - 13);
        }else if (str[i] >= 'A' && str[i] <= 'M'){
            print(str[i] + 13);
        }else if (str[i] >= 'N' && str[i] <= 'Z'){
            print(str[i] - 13);
        }else{
            print(str[i]);
        }
        i++;
    }
    print('\n');
}

int main(int argc, char **argv)
{
    if (argc == 2){
        rot(argv[1]);
    }
    print('\n');
    return 0;
}