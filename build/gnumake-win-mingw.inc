DEFS += -DPY_EXPORTS
INCPATH += -I"$(PYTHONPATH)/include"
LIBPATH += -L"$(PYTHONPATH)/libs" -LC:\msys64\mingw64\bin
LIBS += -lpython$(PYTHONVER)

ifdef PY_NUMARRAY
DEFS += -DPY_NUMARRAY
endif
ifdef PY_NUMPY
DEFS += -DPY_NUMPY
endif
ifdef PY_NUMERIC
DEFS += -DPY_NUMERIC
endif

ifdef PY_USE_GIL
DEFS += -DPY_USE_GIL
endif

ifdef PY_USE_INOFFICIAL
DEFS += -DPY_USE_INOFFICIAL
endif

ifdef PY_NUMPY
INCPATH += -I"$(PYTHONPATH)/Lib/site-packages/numpy/core/include"
endif
