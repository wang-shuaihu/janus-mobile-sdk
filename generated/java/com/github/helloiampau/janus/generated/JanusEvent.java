// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

package com.github.helloiampau.janus.generated;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class JanusEvent {
    public abstract long sender();

    public abstract Jsep jsep();

    public abstract JanusData data();

    private static final class CppProxy extends JanusEvent
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        @SuppressWarnings("deprecation")
        protected void finalize() throws java.lang.Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        @Override
        public long sender()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_sender(this.nativeRef);
        }
        private native long native_sender(long _nativeRef);

        @Override
        public Jsep jsep()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_jsep(this.nativeRef);
        }
        private native Jsep native_jsep(long _nativeRef);

        @Override
        public JanusData data()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_data(this.nativeRef);
        }
        private native JanusData native_data(long _nativeRef);
    }
}
