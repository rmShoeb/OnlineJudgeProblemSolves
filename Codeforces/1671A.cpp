#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[])
{
    int t{0};
    scanf("%d", &t);

    char s[60]{};
    int str_len{};
    int count{};
    for (int i = 0; i < t; i++){
        scanf("%s", s);
        str_len = static_cast<int>(strlen(s));
        switch (str_len){
        case 1:
            printf("NO\n");
            break;
        case 2:
            if (s[0] != s[1])
                printf("NO\n");
            else
                printf("YES\n");
            break;
        default:
            count = 1;
            for(int j=1; j<str_len; j++){
                if(s[j-1] == s[j]) count++;
                else{
                    if(count == 1){
                        printf("NO\n");
                        break;
                    }
                    else count = 1;
                }
            }
            break;
        }
    }

    return 0;
}
