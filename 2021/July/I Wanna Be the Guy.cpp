    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
     int x[250];
    int n , a , b;
    cin >> n >> a;
    int count = 0;

    for(int i =  0 ; i < a ; i++){
        cin >> x[i];
    }
    cin >> b;
    for(int i = a ; i < a + b ; i++){
        cin >> x[i];
    }

    sort(x , x+(a+b));

    for(int i = 0 ; i < a+b ; i++){
        if(x[i] != x[i+1]){
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    }
