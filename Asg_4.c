#include <stdio.h>

int main()
{
	int present;
	char battery [10];
	double Li_6 = 7.016;
	double Li_7 = 6.015;
	char feeling [10];

	printf("흐음, 지금이 오후 몇 시지? (시간은 1부터 12까지 정수 형태로 있어.)\n");
	scanf("%d", &present);

	printf("\n   안녕하십니까. 오늘의 소식 알려드리는 ABC의 %d시 뉴스입니다. \n", present);
	printf("   전기차 배터리 시장의 글로벌 경쟁은 날로 치열해지고 있습니다. \n\n");

	printf("전기차 배터리 시장이면 어디를 말하는 것일까? LG사? SAMSUNG사? (둘 중 하나를 골라보자.) \n");
	scanf("%s", &battery);

	printf("\n   T사와 F사 등 완성차 업체까지 배터리를 직접 생산하겠다고 선언함에 따라 \n");
	printf("   그동안 시장을 지배해온 %s와(과) 같은 기존 배터리 전문기업들은 바짝 긴장하고 있습니다. \n\n", battery);

	printf("맞다! 오늘 일반화학 시간에 배터리의 요소인 리튬에 대해서 배웠지. \n");
	printf("자연에서 발견되는 리튬의 약 7.5%%가 6Li이고, 나머지 92.5%% 정도가 7Li이 차지한다고 하셨었어. \n");
	printf("그러면 평균 원자량을 계산해볼까? \n\n");

	printf("  (%5.3f * 0.925) \n", Li_6);
	printf("+ (%5.3f * 0.075) \n", Li_7);
	printf("----------------- \n");
	printf("= %14.3f \n\n\n", Li_6 * 0.925 + Li_7 * 0.075);

	printf("역시 난 못하는 것이 없네! \n");
	printf("너도 그렇게 생각하지? ('yes' 또는 'no'로 대답해봐.) \n");
	scanf("%s", &feeling);
	printf("%s? 네 생각이 맞아! 의견 고마워.>< \n\n", feeling);
}
