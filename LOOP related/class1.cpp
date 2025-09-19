class Box {
    private:
        int length;
    public:
        Box(int l) : length(l) {}
        friend void printLength(Box b); // Friend function
};

void printLength(Box b) {
    cout << "Length: " << b.length; // Accesses private member
}