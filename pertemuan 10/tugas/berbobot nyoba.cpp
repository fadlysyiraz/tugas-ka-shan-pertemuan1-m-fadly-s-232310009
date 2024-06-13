#include <iostream>
#include <vector>
using namespace std;

class graf{
	private:
		int jumlahsimpul;
		vector<vector<int > >matriksketetanggaan;
		
	public:
		graf(int simpul){
            jumlahsimpul=simpul;
            matriksketetanggaan.resize(simpul,vector<int>(simpul, 0));
        }
	void tambahsisi(int u, int v, int weight){
	if(u >= 0 && v <jumlahsimpul&& v >= 0 && v < jumlahsimpul){
	matriksketetanggaan[u][v]=weight;	
	}else
	cout<<"Sisi tidak valid!"<<endl;
}
	void hapussisi(int u,int v){
	if(u>=0 && u<jumlahsimpul && v>=0 && v<jumlahsimpul){
	matriksketetanggaan[u][v]=0;
	matriksketetanggaan[v][u]=0;
	}else{cout<<"Sisi tidak valid!";
	}
}

	void tampilkan(){
	for(int i=0;i<jumlahsimpul;i++){
		cout << "Vertex " << i << " : ";
		for(int j=0;j<jumlahsimpul;j++){
			if (matriksketetanggaan[i][j] != 0) {
                        cout << " -> (" << j << ", " <<matriksketetanggaan[i][j] << ")";
                    }
		}
		cout<<endl;
	}
}
};

int main(){
	int simpul=5;
	graf g(simpul);
	
	g.tambahsisi(0,1,10);
	g.tambahsisi(0,4,20);
	g.tambahsisi(1,2,30);
	g.tambahsisi(1,3,40);
	g.tambahsisi(1,4,50);
	g.tambahsisi(2,3,60);
	g.tambahsisi(3,4,70);
	
	cout<<"Graph berbobot: "<<endl;
	
	g.tampilkan();
	cout<<endl;
	
	return 0;
}

