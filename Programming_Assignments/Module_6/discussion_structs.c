struct ramen_shop {
  char name[100];
  char style[30];
  char lat[20];
  char lon[20];
};

struct app_rating {
  char app_name[200];
  char reviewer_username[200];
  int rating;
};

struct bank_account {
  char name[200];
  char account_number[30];
  char account_type[50];
  long long balance;
}