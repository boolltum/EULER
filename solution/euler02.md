# PROJECT EULER 02

피고나치 수열의 각 항은 바로 앞의 항 두개를 더한 것이됩니다. 1과 2로 시작하는
경우 이수열은 아래와 같습니다.

1,2,3,5,8,13,21,34,55,89...

짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?

___

피고나치 수열의 N 번째 항을 F(n)이라고 하면
F(N) =F(N-1)+F(N-2)가 된다.

F(N)이 4백만이하가 되도록 반복문을 설정하고 짝수인지를 체크하면서 더한다.

```C
#include <stdio.h>

int main(){
	int a=1;
	int b=1;
	int c=0;
	while(a<=4000000){
		
		b=a;
		a=a+b;
		
		
		
		if(a%2==0){
			c=c+a;
		}
		
	}
	printf("답은%d",c);
}
```
F1은F2를 내려받고 F2는 기존의 F1과F2의 합으로변하면서 F2항이 피고나치 수열을 계속 만들어가게 된다. 그때F2가4백만 이하이면서 짝수이면 C에 모두 더해 결과를 출력하도록 한다.

#### 정답 : 4613732