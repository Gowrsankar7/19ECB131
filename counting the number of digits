# include <stdio.h>
# include <string.h>
# include <time.h>
int main(void) {
  char sentence[20];
  int number_of_letters = 0;
  printf("Enter a sentence: ");
  scanf("%s", sentence);

  time_t start, end;
  start = clock();
  for (int i=0; i<strlen(sentence); i++)
    if (sentence[i] !=  ' ')
      number_of_letters++;
  end = clock();
  printf("Execution Time : %ld\n",(end-start));
  printf("\nThe number of letters in the given sentence are : %d\n", number_of_letters);
  return 0;
}

// Output:

Enter a sentence: gowri
The number of letters in the given sentence are : 5


Enter a sentence: gowri sankar
The number of letters in the given sentence are : 5
