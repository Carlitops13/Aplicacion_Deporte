#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <QString>

class Deportista
{
public:
    QString nombre;
    QString pais;
    int edad;
    QString deporte;
    QChar genero;

    Deportista() : edad(0), genero('O') {}
    Deportista(const QString& nom, const QString& pa, int ed, const QString& dep, QChar gen)
        : nombre(nom), pais(pa), edad(ed), deporte(dep), genero(gen) {}
};

#endif // DEPORTISTA_H
