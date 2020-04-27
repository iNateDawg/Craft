nate@nate-Q550LF:~/Downloads/Craft-nate_m_issue14$ py.test test.py
================================================================================================================================================== test session starts ===================================================================================================================================================
platform linux -- Python 3.7.5, pytest-5.4.1, py-1.8.1, pluggy-0.13.1
rootdir: /home/nate/Downloads/Craft-nate_m_issue14
plugins: cov-2.8.1
collected 6 items                                                                                                                                                                                                                                                                                                        

test.py ......                                                                                                                                                                                                                                                                                                     [100%]

==================================================================================================================================================== warnings summary ====================================================================================================================================================
/home/nate/.local/lib/python3.7/site-packages/matplotlib/backends/backend_gtk3.py:41
  /home/nate/.local/lib/python3.7/site-packages/matplotlib/backends/backend_gtk3.py:41: DeprecationWarning: Gdk.Cursor.new is deprecated
    cursors.MOVE:          Gdk.Cursor.new(Gdk.CursorType.FLEUR),

-- Docs: https://docs.pytest.org/en/latest/warnings.html
============================================================================================================================================= 6 passed, 1 warning in 41.48s ==============================================================================================================================================
