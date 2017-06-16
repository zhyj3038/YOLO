#ifndef DROPOUT_LAYER_H
#define DROPOUT_LAYER_H

#include "layer.h"
#include "network.h"

typedef layer dropout_layer;

dropout_layer make_dropout_layer(int batch, int inputs, float probability);

<<<<<<< HEAD
void forward_dropout_layer(dropout_layer l, network net);
void backward_dropout_layer(dropout_layer l, network net);
void resize_dropout_layer(dropout_layer *l, int inputs);

#ifdef GPU
void forward_dropout_layer_gpu(dropout_layer l, network net);
void backward_dropout_layer_gpu(dropout_layer l, network net);
=======
void forward_dropout_layer(dropout_layer l, network_state state);
void backward_dropout_layer(dropout_layer l, network_state state);
void resize_dropout_layer(dropout_layer *l, int inputs);

#ifdef GPU
void forward_dropout_layer_gpu(dropout_layer l, network_state state);
void backward_dropout_layer_gpu(dropout_layer l, network_state state);
>>>>>>> b5b3d7367411302dd6e73c8fe583d6860a786445

#endif
#endif
