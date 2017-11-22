//设计一个函数将9.9、9.10中定义的字典按字母表顺序排序

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

int main(void)
{
	int i, n = 10;
	void dictionarySort(struct entry dict[], int n);
	struct entry dictionary[100] = 
	{
		{"aardvark", "a buffering African mammal"   },
		{"abyss",    "a bottomless pit"             },
		{"acumen",   "mentally sharp; keen"         },
		{"addle",    "to become confused"           },
		{"aerie",    "a high nest"                  },
        {"affix",    "to append; match"             },
		{"agar",     "a jelly made from seaweed"    },
		{"akoy",     "a nautical call of greeting"  },
		{"aigrette", "an normal cluster of feathers"},
		{"ajar",     "partially opened"             }
	};
	
	dictionarySort(dictionary, n);
	
	printf("After sort...\n");
	printf("\nword                    definition\n");
	printf("--------             ------------------------------\n");
	
	for(i = 0; i < n; ++i)
		printf("%8s             %30s\n", dictionary[i].word, dictionary[i].definition);
	
	return 0;
}

void dictionarySort(struct entry dict[], int n)
{
	int i, j;
	struct entry temp;
	bool compareStrings(char s1[], char s2[]);
	
	for(i = 0; i < n - 1; ++i)
		for(j = i + 1; j < n; ++j)
			if(compareStrings(dict[i].word, dict[j].word)){
				temp = dict[i];
				dict[i] = dict[j];
				dict[j] = temp;
			}
}

bool compareStrings(char s1[], char s2[])
{
	int i = 0, answer;
	
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	
	if(s1[i] > s2[i])
		return true;      /* s1 < s2 */
	else
		return false;;    /* s1 > s2 */
}