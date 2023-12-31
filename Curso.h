#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <string>
#include "PlanDeEvaluacion.h"

using namespace std;

class Curso{
    //Atributos
    private:
        string nombreCurso;
        int idCurso;
        PlanDeEvaluacion planDeEvaluacion;
    
    public:
        //Constructores
        Curso();
            Curso(string nombreCurso_, int idCurso_, PlanDeEvaluacion planDeEvaluacion_);

        //Getters
        string getInfoCurso();

        //Setters
        void setNombreCurso(string nombreCurso_);
        void setIDCurso(int idCurso_);
        void cambiarPlanDeEvaluacion(PlanDeEvaluacion planDeEvaluacion_);
};

#endif