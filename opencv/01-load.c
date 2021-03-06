#include <highgui.h>
#include <cv.h>

int main(int argc, char** argv)
{
    // Puntero a la imagen cargada
    IplImage* img;

    // Carga la imagen
    img = cvLoadImage("tucan.jpg",1);

    // Crea una ventana
    cvNamedWindow("MyImage", CV_WINDOW_AUTOSIZE);

    // Muestra la imagen en la ventana
    cvShowImage("MyImage", img);

    // Espera
    cvWaitKey(0);
    
    // Destruye la ventana "Original Image".
    cvDestroyWindow("MyImage");

    return 0;
}
