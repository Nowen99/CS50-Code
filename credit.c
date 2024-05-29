#include <cs50.h>
#include <stdio.h>

int main(void)
{
long card_number;
do
{
    card_number = get_long("Credit Card Number: ");
}
while
(
    card_number > 0
);

}
