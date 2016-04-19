const int N = 100;

class Array
{
public:
	Array(int = N);
	Array(int*, int);
	int TheElement(int);
	void RandomArray();
	void EnterArray(int*);
	void DisplayArray();
	void BubbleSort();
	void InsertionSort();
	void SelectionSort();
	void Merge(int, int);
	void MergeSort(int, int);
	void QuickSort();
	void QuickSort(int, int);
	int BinarySearch(int);
	int GetByIndex(int) const;
	void SetByIndex(int, int);
	int CompareTo(Array);
	bool Equals(Array);
	int GetSize() const;
	int FindMin();//position!
	int FindMax();

	//TODO BinarySearch!
	~Array();
private:
	int* a;
	int num;
	int size;
	void SetSize(int);
	int* AllocMemory(int);
	void Swap(int&, int&);
};