#include <stdio.h>
#include <string.h>

char rotor_apply(char *rotor, char cheezit){
	return rotor[cheezit - 'A'];
}

char *rotor_invert(char *rotor){
	char i_rotor[26];
	strcpy(i_rotor, rotor);
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	//STOLEN from https://www.geeksforgeeks.org/c-program-for-insertion-sort/ 
	for (int i = 1; i < 26; i++) {
        int key = i_rotor[i];
	int temp2 = alphabet[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are
          // greater than key, to one position to
          // the right of their current position
        while (j >= 0 && i_rotor[j] > key) {
	  // printf("j=%d\n",j);
           i_rotor[j + 1] = rotor[j];
	   alphabet[j + 1] = alphabet[j];
           j = j - 1;
        }
        

        // Move the key to its correct position
        i_rotor[j + 1] = key;
	alphabet[j + 1] = temp2;
    }
	
 char* ptr = alphabet;
 return ptr;
}


int main(){
	char *fast = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
	char *medium = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
	char *slow = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
	char *reflector = "IXUHFEZDAOMTKQJWNSRLCYPBVG";
	
	char test = rotor_apply(fast, 'E'); //needs to be caps 
	char test2 = rotor_apply(medium, test);
	char test3 = rotor_apply(slow, test2);
	char test4 = rotor_apply(reflector, test3);
	printf("slow roter = %s\n", slow);
	slow = rotor_invert(slow); //memory leak ૮ ˶ᵔ ᵕ ᵔ˶ ა
	printf("inverted slow roter = %s\n", slow);
	char test5 = rotor_apply(slow, test4);
	printf("test = %c\n", test);
	printf("test2 = %c\n", test2);
	printf("test3 = %c\n", test3);	
	printf("test4 = %c\n", test4);	
	printf("test5 = %c\n", test5);
	return 0;

}
