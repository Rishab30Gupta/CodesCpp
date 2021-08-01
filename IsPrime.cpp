bool isPrime(int N){
	if(N<2)return false;
	if(N<4)return true;
	if((N&1)==0)return false;
	if(N%3==0)return false;
	int curr=5,s=sqrt(N);
	while(curr<=s){
		if(N%curr==0)return false;
		curr+=2;
		if(N%curr==0)return false;
		curr+=4;
	}
	return true;
}
