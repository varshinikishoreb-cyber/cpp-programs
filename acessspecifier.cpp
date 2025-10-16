using namespace std;
class Myclass{
	public:
		int  publicvar;
		private:
			int privatevar;
			protected:
				int protectvar;
				public:
					void setprivatevar(int val){
						privatevar=val;//access private member inside class
						
					}
					int getprivatevar(){
						return privatevar;
					}
};
int main()
{
	Myclass obj;
	obj.publicvar=10;
	obj.setprivatevar(20);
	cout<<"public var"<<obj.publicvar<<endl;
	cout<<"private var"<<obj.getprivatevar()<<endl;
	return 0;
	
}
