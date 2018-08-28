- clone TF repo
- install bazel
- cmd: ./configure
- cmd: bazel build -c opt //tensorflow:libtensorflow_cc.so
==
- copy libraries in ofxMSATensorflow: framework must be included (libtensorflow_framework.so)
- ofxMSATensorflow fix for OSX: https://github.com/memo/ofxMSATensorFlow/issues/14#issuecomment-283323712
- Replaced google headers: tensorflow/bazel-tensorflow/external/protobuf_archive/src
- Bug: #include <google/protobuf/stubs/time.h> -> changed to time_google.h
- Replace tensorflow headers: Run script/ubuntu/copy_headers.sh 

//Links

https://github.com/tensorflow/tensorflow/issues/12539#issuecomment-346955732
https://github.com/memo/ofxMSATensorFlow/issues/3#issuecomment-178009249

https://stackoverflow.com/questions/51532378/your-cpu-supports-instructions-that-this-tensorflow-binary-was-not-compiled-to