/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace djondb {

using System;
using System.Runtime.InteropServices;

public class ConnectionReference : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal ConnectionReference(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(ConnectionReference obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~ConnectionReference() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          djonwrapperPINVOKE.delete_ConnectionReference(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public DjondbConnection _connection {
    set {
      djonwrapperPINVOKE.ConnectionReference__connection_set(swigCPtr, DjondbConnection.getCPtr(value));
    } 
    get {
      IntPtr cPtr = djonwrapperPINVOKE.ConnectionReference__connection_get(swigCPtr);
      DjondbConnection ret = (cPtr == IntPtr.Zero) ? null : new DjondbConnection(cPtr, false);
      return ret;
    } 
  }

  public int _references {
    set {
      djonwrapperPINVOKE.ConnectionReference__references_set(swigCPtr, value);
    } 
    get {
      int ret = djonwrapperPINVOKE.ConnectionReference__references_get(swigCPtr);
      return ret;
    } 
  }

  public ConnectionReference() : this(djonwrapperPINVOKE.new_ConnectionReference(), true) {
  }

}

}
