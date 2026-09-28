#include <stdio.h>

int main() {
    char team[20];
    
    printf("Enter your favorite IPL team (e.g., mi, csk, rcb, kkr etc...): ");
    scanf("%s", team);

    
    if (team[0] == 'm' && team[1] == 'i') 
    
	{
        printf("Go Mumbai Indians!\n");
    } 

    else if (team[0] == 'c' && team[1] == 's' ) 
	{
        printf("Chennai Super Kings for the win!\n");
    } 
    
    else if (team[0] == 'r' && team[1] == 'c' )
	{
        printf("Ee Sala Cup Namde! Go RCB!\n");
    } 
    
    else if (team[0] == 'k' && team[1] == 'K')
	{
        printf("Korbo Lorbo Jeetbo Re! KKR!\n");
    } 
    
    else if (team[0] == 'r' && team[1] == 'r')
	{
        printf("Rajasthan Royals (RR): Halla Bol! Rajasthan Royals!");

    } 
    
    else if (team[0] == 's' && team[1] == 'r')
	{
        printf("Sunrisers Hyderabad (SRH): Orange Army! Go Sunrisers!\n");
    } 
    
    else if (team[0] == 'd' && team[1] == 'c')
	{
        printf("Delhi Capitals (DC): Roar Machaa! Go Delhi Capitals!");
    } 
    
    else if (team[0] == 'p' && team[1] == 'b')
	{
        printf("Punjab Kings (PBKS): Sadda Punjab! Go Punjab Kings!");
    } 
    
    else if (team[0] == 'g' && team[1] == 't' )
	{
        printf("Gujarat Titans (GT): Aava De! Gujarat Titans!\n");
    } 
    
    else if (team[0] == 'l' && team[1] == 's')
	{
        printf("Lucknow Super Giants (LSG): Adab Se Harayenge! Go LSG!\n");
    } 
    
    else {
        printf("Team not found!\n");
    }

    return 0;
}
