import tensorflow as tf
mnist = tf.keras.datasets.mnist

model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

model.fit(x_train, y_train, epochs)
model.evaluate(x_test, y_test)



