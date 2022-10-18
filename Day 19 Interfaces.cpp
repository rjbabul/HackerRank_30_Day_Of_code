
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int ans=0;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0){
                if(i*i!=n) ans+= (i+ (n/i));
                else ans+=i;
            }
        }
        return ans;
    }
};

