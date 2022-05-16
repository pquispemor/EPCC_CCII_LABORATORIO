class arreglo{
    private:
        int n;
        int *A;
    public:
        arreglo(int);
        ~arreglo();
        void crear();
        void agregar(int x);
        void eliminar();
        void mostrar();
};