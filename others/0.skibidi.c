#include <stdio.h>

int main(){
    char choice;
    printf("Who's the sigma out of these: \n a)Skibidi Vijayan \n b)Nerdy Tharoor \n c)Pookie Sura \n Your answer: ");
    scanf("%c", &choice);

    char result = 'a';

    if(choice == result){
        printf("\nCorrect answer! \n Throughout HEAVEN AND EARTH \n \n Skibidi Vijayan alone is the honoured one.!!🛐 \n");
    }
    else if(choice=='c'){
        printf("\n \n You were close! \n \n Skibidi Vijayan:\"If Pookie Sura regained all of his power \n He could pose some threat to me.\" \n \n Nerdy Tharoor:\"But would you lose??\" \n \n Skibidi Vijayan:\"NAH I'd WIN!!!\"\n \n");
    }
    else if(choice=='b'){
        printf("\n Sorry but Nerdy Tharoor aint that powerful. \n");
    }
    else{
        printf("Invalid Input.")
    }
    return 0;
}
