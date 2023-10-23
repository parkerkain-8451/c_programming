// Write a program that asks for an international dialing code and then looks it up. 
// If we find the code, display the name of the country. If not, print an error message.

#include <stdio.h>



struct dialing_code {
  char *country;
  int code;
};

const struct dialing_code country_codes[] = {
  {"Argentina", 54},
  {"Brazil", 55},
  {"China", 86},
  {"Ethiopia", 251},
  {"Germany", 49},
  {"Colombia", 57},
  {"Egypt", 20},
  // There are more but you get the point
};

int num_countries = 7;

char* find_country(int code){
  for (int i=0; i<num_countries; i++){
    if (country_codes[i].code == code){
      return country_codes[i].country;
    }
  }
  return "ERROR: Country not found";
}

int main(void){

  int user_code;
  char* response;

  printf("Enter a country code: ");
  scanf("%d", &user_code);

  response = find_country(user_code);

  printf("%s\n", response);

}
