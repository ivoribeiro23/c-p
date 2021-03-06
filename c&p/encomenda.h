/* 
 * File:   encomenda.h
 * Author: ivo
 *
 * Created on January 27, 2015, 3:50 PM
 */

#ifndef ENCOMENDA_H
#define	ENCOMENDA_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "DataManagement.h"
#include "Date.h"
    
    typedef struct {
        unsigned short id_encomenda;
        unsigned short id_cliente;
        Date data_encomenda;
        Date data_entrega;
    } Encomenda;
    
    typedef enum {
        ID_ENCOMENDA,
        ID_CLIENTE_ENCOMENDA,
        DATA_ENCOMENDA,
        DATA_ENTREGA,
    } camposEncomenda;



#ifdef	__cplusplus
}
#endif

#endif	/* ENCOMENDA_H */

