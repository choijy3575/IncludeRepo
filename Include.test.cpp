#include <stdio.h>
#include <windows.h>
#include <string.h>

struct music {
    char name[10];
    double Hz;
};

void change(){
	int j;
	char changedmusic;
	char input[10];
	printf("편집할 순서의 번호를 입력하세요: ");
	scanf("%d",&j);
	printf("바꿀 음을 입력해주세요.: ");
	scanf("%s",changedmusic);
	input[j]=changedmusic;
}

int main() {
    struct music notes[] = {
        {"C", 1046.502},
        {"D", 1108.731},
        {"E", 1318.510},
        {"F", 1396.913},
        {"G", 1567.982},
        {"A", 1760.000},
        {"B", 1975.533}
    };

    char input[10];
    double output[100000];
    int a = 0, i = 0, j=0, ans=0;
	char changedmusic;
	
		


    while (1) {
        printf("연주하고 싶은 음을 입력해주세요! (C, D, E, F, G, A, B)\n 다 입력하셨다면 play를 입력해주세요!\n");
        scanf("%s", input);

        if (strcmp(input, "play") == 0) {
            break;
        }

        for (i = 0; i < 7; i++) {
            if (strcmp(input, notes[i].name) == 0) {
                output[a] = notes[i].Hz;
                a++;
            }
        }
    }
        printf("노래를 재생하겠습니다\n");
        Sleep(100); // millisecond delay
        for (i = 0; i < a; i++) {
            Beep((DWORD)output[i], 500); // Beep function with frequency and duration

        }
    printf("음악을 편집? 1.예 2.아니오");
	scanf("%d",&ans);
	
	if(ans==1){
		change()
	}
}

