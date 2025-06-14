#include <stdio.h> 
struct emp{ 
    char name[20]; 
    int age; 
    int basic; 
}; 
void input(struct emp[], int); 
void display(struct emp[], int); 
int main() 
{ 
    int i, j, n; 
    printf("Enter the Number of Employees: "); 
    scanf("%d",&n); 
    struct emp S[n], temp; 
    input(S,n); 
    for(i=0; i<=n-1; i++) 
    { 
        for(j=0; j<=n-2-i; j++) 
        { 
            if(S[j].basic < S[j+1].basic) 
            { 
                temp = S[j]; 
                S[j] = S[j+1]; 
                S[j+1] = temp; 
            } 
        } 
    } 
    printf("\nEmployee details in descending order\n"); 
    display(S,n); 
    return 0; 
} 
void input(struct emp S[], int n) 
{ 
    int i, j; 
    for(i=0; i<=n-1; i++) 
    { 
        fflush(stdin); 
        printf("\nEnter the Name: "); 
        gets(S[i].name); 
        printf("Enter the Age: "); 
        scanf("%d",&S[i].age); 
        printf("Enter the Basic Salary: "); 
        scanf("%d",&S[i].basic); 
    } 
} 
void display(struct emp S[], int n) 
{ 
    int i; 
    float total=0, hra=0, da=0; 
    for(i=0; i<=n-1; i++) 
    { 
        printf("Name: "); 
        puts(S[i].name); 
        printf("Age: %d\n",S[i].age); 
        da = 0.1 * S[i].basic; 
        hra = 0.05 * S[i].basic; 
        total = S[i].basic + hra + da; 
        printf("Total Salary: %.2f\n\n",total); 
    } 
} 
