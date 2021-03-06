/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package djondb;

public class BSONObjVectorPtr {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BSONObjVectorPtr(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BSONObjVectorPtr obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        djonwrapperJNI.delete_BSONObjVectorPtr(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public BSONObjVectorPtr() {
    this(djonwrapperJNI.new_BSONObjVectorPtr__SWIG_0(), true);
  }

  public BSONObjVectorPtr(long n) {
    this(djonwrapperJNI.new_BSONObjVectorPtr__SWIG_1(n), true);
  }

  public long size() {
    return djonwrapperJNI.BSONObjVectorPtr_size(swigCPtr, this);
  }

  public long capacity() {
    return djonwrapperJNI.BSONObjVectorPtr_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    djonwrapperJNI.BSONObjVectorPtr_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return djonwrapperJNI.BSONObjVectorPtr_isEmpty(swigCPtr, this);
  }

  public void clear() {
    djonwrapperJNI.BSONObjVectorPtr_clear(swigCPtr, this);
  }

  public void add(BSONObj x) {
    djonwrapperJNI.BSONObjVectorPtr_add(swigCPtr, this, BSONObj.getCPtr(x), x);
  }

  public BSONObj get(int i) {
    long cPtr = djonwrapperJNI.BSONObjVectorPtr_get(swigCPtr, this, i);
    return (cPtr == 0) ? null : new BSONObj(cPtr, false);
  }

  public void set(int i, BSONObj val) {
    djonwrapperJNI.BSONObjVectorPtr_set(swigCPtr, this, i, BSONObj.getCPtr(val), val);
  }

}
