#include<stdio.h>

void main(){
    int Agg,Ms1,Ms2,Ms3,Ms4,Ms5;
    float p;
    printf("Enter your Subject Scores out of 100\n");
    printf("Subject 1: ");
    scanf("%d",&Ms1);
    printf("Subject 2: ");
    scanf("%d",&Ms2);
    printf("Subject 3: ");
    scanf("%d",&Ms3);
    printf("Subject 4: ");
    scanf("%d",&Ms4);
    printf("Subject 5: ");
    scanf("%d",&Ms5);
    Agg=Ms1+Ms2+Ms3+Ms4+Ms5;
    p=Agg/500.0;
    printf("Report\n");
    printf("Subject 1 Score(out of 100): %d\n",Ms1);
    printf("Subject 2 Score(out of 100): %d\n",Ms2);
    printf("Subject 3 Score(out of 100): %d\n",Ms3);
    printf("Subject 4 Score(out of 100): %d\n",Ms4);
    printf("Subject 5 Score(out of 100): %d\n",Ms5);
    printf("Aggregate Score of the Student out of 500: %d\n",Agg);
    printf("Percentage: %0.2f\n",p*100);
}
