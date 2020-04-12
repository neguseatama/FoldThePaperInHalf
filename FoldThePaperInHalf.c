/*
 C言語による紙を半分に折る回数とその厚さ
 https://neguse-atama.hatenablog.com
*/
#include <stdio.h>
int main(void){
    double a,b,atusa1,atusa2;
    int tuzuki,kaisuu,L;
    do{
    printf("紙の厚みと紙を半分に折る回数を入力してください。\n");
    printf("紙の厚み:");scanf("%lf",&atusa1);
    printf("紙を半分に折る回数:");  scanf("%d",&kaisuu);
    a=b=2;
    for(L=1;L<kaisuu;L++){
        b=a*b;
    }
    atusa2=atusa1*b;
        printf("紙の厚さは%lfmm(%lfm)です。\n",atusa2,atusa2/1000);
        printf("もう一度計算しますか？・・・(0)はい　(1)いいえ:");
        scanf("%d",&tuzuki);
    }while (tuzuki==0);
}