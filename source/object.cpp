#include"object.h"
#include<DxLib.h>
#include"config.h"

#include"works.h"
#include"fire.h"

void Init(){
	WorksInit();
	FireInit();
}
void Update(){
	WorksUpdate();
	FireUpdate();
}
void Draw(){
	WorksDraw();
	FireDraw();
}
void Delete(){
	WorksDelete();
	FireDelete();
}
