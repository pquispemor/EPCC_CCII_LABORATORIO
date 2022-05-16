class matriz{
    private:
        int n;
        int **m;
    public:
        matriz(int);
        ~matriz();
        void crear();
        void mostrar();
        void busqueda(int d);
};