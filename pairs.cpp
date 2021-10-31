//final code
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> pair_sum(vector<int> arr, int sum) {
    unordered_set<int> s;
    vector<int> res;
    for (int i = 0; i < arr.size(); i++) {
        if (s.find(sum - arr[i]) != s.end()) {
            res.push_back(arr[i]);
            res.push_back(sum - arr[i]);
            return res;
        }

        //insert current number in set
        s.insert(arr[i]);
    }
    return {};
}

int main()
{

    int n, s;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the sum: ";
    cin >> s;

    vector<int> v;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the element : ";
        cin >> x;
        v.push_back(x);
    }

    result= pair_sum(v, s);
    if(result.size()==0)
    {
        cout<<"No pair found";
    }
    else
    {
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
    }

    

    return 0;
}


//draft(rough logic)
/*#include<iostream>
#include<vector>

using namespace std;

vector<int> print_pairs(int t, int n, int s){
    vector<int> res;
    vector<int> output;
    for(int i=0; i<n; i++){
        if(s-t == res[i]){
            output.push_back(t);
            output.push_back(res[i]);
            
            break;
        }
        res.push_back(t);
    }
    return output;
}

int main(){

    int n, s;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the sum: ";
    cin >> s;

    vector<int> v;
    vector<int> result;
    for(int i=0; i<n; i++){
        int x;
        cout << "Enter the element : ";
        cin >> x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++){
        result = print_pairs(v[i], n, s);
        if(result.size() == 0){
            continue;
        }
        else{
            break;
        }
    }

    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}*/



//method 2:
/*#include<iostream>
using namespace std;

int main(){
    int n, s;
    int arr[n];
    cout<<"enter no of elements: ";
    cin>>n;

    cout<<"enter the sum: ";
    cin>> s;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] != arr[j]){
                if((arr[i] + arr[j])==s){
                    cout<<"["<<arr[i]<<" , "<<arr[j] <<"]" <<endl;
                    break;
                }
            }
        }
    }

    return 0; 
}*/