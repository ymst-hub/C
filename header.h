#ifndef _INCLUDE_HEADER_//定義があるか調べる、あればコンパイルを行わない
#define _INCLUDE_HEADER_

extern int sum(int min,int max);
//ソースの説明を書くと良い（設計書として使う）
extern int public;//externで宣言のみ行う
//変数の共有は乱用しない
#endif//ここまでをコンパイルする