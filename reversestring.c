#include<stdio.h>

char s[100];
int t;
int push(){
    char c;
    scanf("%c",&c);
    s[t++]=c;
    return t;
}

int pop (){
    printf("%c",s[t--]);
    return t;
}

int main(){
    printf("enter the length");
    int n;
    scanf("%d",&n);
    for (int i =0;i<=n;i++){
        t = push();
    }
    for (int i=t ;i>-1;i--){
        t=pop();
    }
}
