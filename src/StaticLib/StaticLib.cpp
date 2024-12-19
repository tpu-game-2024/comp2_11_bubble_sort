#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(begin == NULL)return false;
	if(end == NULL)return false;
	if(end < begin)return false;

	item n ,m;
	
	
	int size = sizeof(item);
	int num = (int)(end - begin);


	for (int i = 0; i < num; i++) {
		for (int j = num-1; j > i; j--) {
			memcpy(&n, begin + j, size);
			memcpy(&m, begin + (j - 1), size);
			if (n.key < m.key) {
				memmove(begin + (j - 1), &n, size);
				memmove(begin + j, &m, size);
			}
		}
	}



	return true;
}
