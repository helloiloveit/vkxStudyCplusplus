
struct home{
 void func(void);
 void func2(int i);
};

void home::func(void){
};

void home::func2(int i){
};

int main(){
	home a;
	a.func();
	a.func2(3);
}
