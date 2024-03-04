
class student
{
private:
	char nume[20];
	float nm, ne, nh;

public:
	void setname(char s[20]);
	char* getname();
	
	void math(float x);
	float getmath();

	void eng(float x);
	float geteng();

	void hist(float x);
	float gethist();

	float media();

};

